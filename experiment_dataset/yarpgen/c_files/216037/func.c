/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216037
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [4U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_1 + 1])), (var_13))))));
                var_16 = ((/* implicit */int) (short)6144);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_17 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */unsigned long long int) 2147483647)) * (var_9))) : (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-72)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))))));
                    var_18 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)49)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6170)) ? (-9063584705363367517LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [(unsigned short)16] [i_3])) * (((/* implicit */int) (short)-6124)))))));
                        var_20 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned char) (short)28282))))) ? (max((max((0LL), (arr_6 [(short)0] [(signed char)2] [i_0]))), (((/* implicit */long long int) min(((short)6170), (((/* implicit */short) var_5))))))) : (min((((/* implicit */long long int) var_14)), ((-(arr_7 [i_0] [i_0] [i_0])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_4] [17] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6549113876762210955LL)) ? (6043733949109534476LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */unsigned int) ((((unsigned long long int) -6043733949109534482LL)) << ((((-(arr_7 [(unsigned short)1] [i_1] [i_2]))) - (664117952008992367LL)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((_Bool) 4294967295U));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_6 - 2] [i_0]))));
                            var_24 = ((/* implicit */int) arr_18 [18U] [i_1] [18U] [(short)12] [i_4] [i_6]);
                            var_25 = ((/* implicit */unsigned short) 6917529027641081856ULL);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)-6172))) ? (133693440U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6043733949109534476LL)) ? (-327284883) : (((/* implicit */int) var_10)))))));
                        }
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30949)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6185))) : (5763712647594093556ULL)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max(((short)-6187), ((short)6596)))) : (((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */int) (signed char)101)) : (1155429045)))))) : ((((!(var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [(signed char)13] [i_2] [(unsigned short)12] [i_1 - 1] [4LL] [i_0]), ((short)32767))))) : (max((((/* implicit */unsigned int) var_15)), (133693441U)))))));
                    }
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_27 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((unsigned char) 2267790387U))), (((((/* implicit */_Bool) arr_3 [i_7 - 2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */long long int) min((arr_16 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7]), (arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [(signed char)18]))))));
                        var_28 = ((/* implicit */long long int) min((var_13), (((/* implicit */unsigned short) ((arr_8 [i_1] [i_1] [i_1] [i_7 + 2] [i_1 + 1] [i_1]) == (((/* implicit */long long int) arr_14 [i_0] [(signed char)9] [i_2] [i_7 + 2])))))));
                    }
                    var_29 = ((/* implicit */_Bool) var_0);
                }
                arr_23 [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [(_Bool)1]);
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_12))));
}
