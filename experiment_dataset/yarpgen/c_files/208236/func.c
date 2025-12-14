/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208236
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) (((~(-1285506659))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_3))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_0 - 1]);
                    var_13 = ((/* implicit */int) 1899867925U);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((10227647317234437779ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_15 = ((/* implicit */long long int) arr_4 [i_0 - 2]);
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((int) ((-4908897142882398948LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_18 = ((/* implicit */unsigned char) ((long long int) arr_15 [i_5]));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((~(-9019691396483214143LL)))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (9019691396483214143LL))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_2)))))));
                        }
                        var_21 = ((/* implicit */_Bool) -9019691396483214143LL);
                        arr_27 [i_5] = ((/* implicit */_Bool) ((long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                        var_22 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (var_6)));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((arr_26 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6] [i_6]) & (((((/* implicit */long long int) arr_24 [i_5] [i_6] [i_6] [i_5] [i_6] [i_6])) - (arr_16 [i_6] [i_5])))));
            var_24 = ((/* implicit */int) min((var_24), ((+(arr_24 [i_5] [i_6] [7LL] [i_5] [i_5] [i_6])))));
            var_25 *= ((/* implicit */unsigned int) arr_26 [i_5] [i_5] [(_Bool)1] [9LL] [i_6] [i_5] [21LL]);
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    arr_33 [i_5] [i_10] = ((/* implicit */_Bool) arr_26 [i_5] [i_10] [i_10] [4LL] [i_11] [i_11] [(unsigned char)9]);
                    var_26 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : ((~(-7160750289356190757LL))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_7))));
}
