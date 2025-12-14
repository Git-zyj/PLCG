/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215133
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (562949953421312ULL) : (17266752298356610799ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 6; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) (signed char)59);
                        arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) max(((unsigned short)32765), (((/* implicit */unsigned short) (signed char)127))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */int) arr_16 [i_2] [i_5 + 1]);
                            arr_19 [i_0] [i_2] [0U] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (signed char)127))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_18 [i_6] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_4] [i_6]))))) : (((((/* implicit */_Bool) arr_10 [i_6] [i_4] [i_2])) ? (10163482730721541405ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)18060)) ^ (((((/* implicit */int) (signed char)46)) | (((/* implicit */int) (signed char)86))))));
                            arr_23 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 10757834089097322588ULL)) && (((((/* implicit */_Bool) 131071ULL)) && (((/* implicit */_Bool) 311988935748278467ULL))))));
                            var_15 ^= ((/* implicit */signed char) arr_2 [i_1 + 1] [i_2]);
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_26 [i_1] [i_2] [i_1 + 1] [i_1] [i_1 + 2] [6ULL] = (signed char)-29;
                            var_16 = ((/* implicit */unsigned long long int) arr_15 [i_7] [i_4] [i_2] [i_1] [i_0]);
                            var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(131071ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))))));
                        }
                        var_18 = (unsigned short)3353;
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53))))) / ((-((((_Bool)1) ? (arr_0 [i_8]) : (((/* implicit */int) arr_21 [i_0] [i_2] [i_4] [i_8]))))))));
                            var_20 = (signed char)127;
                            arr_31 [i_0 + 2] [i_0] [i_1] [i_0] [i_2] [i_2] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_1 - 2] [i_8])) & (arr_10 [(signed char)3] [i_1] [i_1 - 1]))))));
                        }
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (signed char)25))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)53)))), (((max((131071ULL), (((/* implicit */unsigned long long int) 1726748428U)))) % (((/* implicit */unsigned long long int) min((arr_34 [i_0] [i_0]), (((/* implicit */unsigned int) arr_18 [i_0] [i_1 + 1] [i_0] [i_0 + 2] [i_0]))))))))))));
                    var_23 = ((/* implicit */_Bool) 4217060723U);
                    var_24 = ((/* implicit */signed char) 3437835600U);
                }
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (4217060723U) : (857131695U))))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)127)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) (_Bool)1);
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6105968425801443549LL)) ? (((/* implicit */int) (unsigned short)62182)) : (1660768187)))) ? (((((/* implicit */_Bool) 10757834089097322586ULL)) ? (((/* implicit */long long int) 1726748423U)) : (-6105968425801443526LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)46)) << (((var_7) - (3679097779U))))))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((((/* implicit */_Bool) 7126663889996845721LL)) ? (16532835464236755370ULL) : (((/* implicit */unsigned long long int) 6105968425801443548LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3359)))))));
}
