/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247525
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((int) 13332680921517688067ULL))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((_Bool) 67108352U)) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_2] [i_1]))))), (((((/* implicit */_Bool) 5114063152191863576ULL)) ? (13332680921517688067ULL) : (5114063152191863560ULL))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2411)) ? (arr_8 [i_0] [i_1 - 2] [i_2] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)240)))))) % (((12061594311895091864ULL) << (((((/* implicit */int) (unsigned short)237)) - (228)))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((int) arr_7 [i_0] [i_1 + 3] [i_1 + 3] [5ULL] [i_3 + 2] [i_3 - 2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) ((short) arr_5 [i_0] [i_0] [i_3] [i_3 + 1]));
                            var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_3] [i_4]);
                            var_23 = ((/* implicit */unsigned long long int) (short)-7883);
                        }
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_24 = var_16;
                            var_25 = 4178859969U;
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 116107326U))));
                            var_27 = ((/* implicit */long long int) 4178859958U);
                        }
                        var_28 = ((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_3]) > (((/* implicit */unsigned int) max((var_17), (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3] [9ULL] [i_1])))))));
                        var_29 = 13332680921517688071ULL;
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    var_30 = arr_17 [4LL] [i_6];
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_8 [i_6] [i_7] [i_8] [i_6])))))))) == (max(((-(arr_8 [i_6] [i_7] [i_8] [i_8]))), (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8])))))))));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((int) min((((/* implicit */int) ((short) arr_19 [i_8] [i_8]))), (arr_12 [(unsigned char)24] [i_6] [i_8] [i_7 - 1] [i_6] [i_7])))))));
                    var_33 = ((/* implicit */signed char) min(((+(((/* implicit */int) (short)13884)))), (min((min((((/* implicit */int) (_Bool)1)), (-1768416362))), (((/* implicit */int) arr_15 [i_7 + 1]))))));
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((((/* implicit */unsigned long long int) 8950621383093787068LL)) != (9707631269175296612ULL))), (arr_19 [i_6] [i_7 - 2]))))));
                }
            } 
        } 
    } 
}
