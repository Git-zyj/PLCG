/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196567
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((max((3806886226106042402LL), (-3693015467779784908LL))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 - 1] [i_0 + 1]) < (3806886226106042402LL)))))));
        var_18 = (+(((((/* implicit */_Bool) 2839241743855703451LL)) ? (3693015467779784914LL) : (-9050439746857003376LL))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_19 |= 1152921504539738112LL;
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (arr_8 [i_3] [i_2] [i_3] [i_4])));
                            var_21 = ((((/* implicit */_Bool) (((+(9223372036854775807LL))) >> (((/* implicit */int) ((arr_6 [i_3]) == (-3693015467779784908LL))))))) ? (arr_13 [i_1] [7LL] [i_1] [i_1]) : ((~(7157039545071738392LL))));
                            var_22 ^= ((long long int) arr_8 [i_1] [i_1] [7LL] [i_4 - 1]);
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_23 &= max((((((/* implicit */_Bool) 8785440345602325125LL)) ? (arr_18 [i_1] [i_2] [i_2] [i_6] [i_2]) : (arr_18 [i_6] [i_3] [i_3] [i_4] [i_6]))), (((/* implicit */long long int) ((arr_18 [i_1] [i_2] [i_3] [3LL] [i_6]) != (arr_18 [i_1] [i_2] [i_3] [i_4 + 2] [i_6])))));
                            var_24 = (-(((((((/* implicit */_Bool) var_5)) ? (arr_13 [i_1] [i_3] [i_3] [4LL]) : (arr_4 [i_3] [i_4]))) | (((/* implicit */long long int) ((/* implicit */int) ((-976907881261600694LL) <= (arr_6 [i_2]))))))));
                            var_25 ^= -1LL;
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (min((-4368816659279290532LL), (-9LL))) : ((-(-976907881261600710LL)))))) ? (var_7) : (max((9223372036854775806LL), ((-9223372036854775807LL - 1LL)))));
                        }
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            arr_21 [i_7 + 3] [i_3] [i_3] [i_1] [i_2] [i_1] = max((5694774814524619587LL), (-7157039545071738403LL));
                            var_27 = (+((+(7611635222865472270LL))));
                            var_28 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) 9007198986305536LL)))), ((!(((/* implicit */_Bool) arr_10 [i_7 - 1] [i_4 + 1] [i_1 + 3]))))));
                            var_29 = ((long long int) ((((/* implicit */_Bool) -6516931690461136984LL)) ? (max((3947149042200019173LL), (arr_6 [i_1 - 1]))) : ((+(-2721655770628487873LL)))));
                        }
                        for (long long int i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            var_30 = 104422928700522178LL;
                            arr_25 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1] = min((max(((~(2326473645591988136LL))), (((((arr_18 [i_1] [13LL] [i_3] [2LL] [i_8]) + (9223372036854775807LL))) >> (((arr_17 [i_8 - 1] [i_8] [i_4 + 1] [i_2] [i_2] [i_1] [i_1]) - (5500957165757038367LL))))))), (arr_18 [i_1] [i_3] [i_3] [i_4] [i_8]));
                        }
                        var_31 = ((long long int) arr_5 [i_1 + 3]);
                        arr_26 [i_4] [i_4] [i_3] [i_1] [i_1] [i_1] = arr_7 [i_1] [i_2];
                    }
                } 
            } 
        } 
    }
    var_32 = var_13;
    var_33 = ((((long long int) 8193678995225644493LL)) % (max((var_4), (var_5))));
}
