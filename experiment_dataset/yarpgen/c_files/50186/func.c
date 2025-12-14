/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50186
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
    var_20 = ((unsigned char) max(((signed char)-103), (((/* implicit */signed char) var_19))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) min((9080140892008580181LL), (((/* implicit */long long int) (unsigned char)189))));
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1 + 1] [i_1 - 2]) / (arr_0 [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 2])) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) arr_2 [i_1] [i_1 + 2]))))));
            var_21 = ((/* implicit */unsigned char) max((var_10), (var_6)));
            var_22 &= ((/* implicit */unsigned long long int) min((-7725051037036599470LL), (-8993858143391232949LL)));
        }
        for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_19)))));
            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 1] [(short)1])) == (((/* implicit */int) arr_7 [i_2 - 1] [(short)7] [(short)4])))));
            var_25 = min((arr_0 [i_2] [i_0]), (137438953471LL));
        }
        arr_9 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_10 [i_0] [i_0] = (+(min((((((/* implicit */unsigned long long int) 7725051037036599470LL)) * (18284611096788399490ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1216390651U)) ? (((((/* implicit */int) (unsigned short)45723)) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))), ((~(3078576639U)))));
        var_26 &= ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) 6520831469125391158ULL)) ? (((/* implicit */int) (short)-4048)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_27 = (unsigned short)49620;
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_3])))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -137438953481LL)) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (var_9)));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4]))));
        var_30 = ((/* implicit */unsigned char) ((arr_13 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4]))) : (6738874307551161863ULL)));
    }
    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_6] = ((/* implicit */int) (short)31067);
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_5 - 1] [i_7])), (-473437481230156249LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [(signed char)12] [i_8])))))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_5])))))))));
                        arr_27 [(short)5] [(short)5] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((var_19) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_26 [18ULL] [i_6] [i_7])))) + (2147483647))) << (((137438953490LL) - (137438953490LL))))))));
                        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)30824)) & (((/* implicit */int) (signed char)102))))))) & ((~(((((/* implicit */long long int) 1073741808)) & (arr_19 [i_5])))))));
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_16) ? (min((((/* implicit */unsigned long long int) 2888834660030469712LL)), (10100116061941990518ULL))) : (((unsigned long long int) -7660597042613103265LL)))))));
                        arr_28 [i_5] [i_5] [i_5] [(unsigned char)7] = ((/* implicit */short) (~((~(arr_21 [i_5 - 2] [i_6])))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            var_34 += ((/* implicit */unsigned long long int) min((min((min((4889998579636698409LL), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1216390646U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) ((((/* implicit */int) var_19)) < ((~(((/* implicit */int) var_3)))))))));
                            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_5 - 2]))))), ((~((~(var_15)))))));
                            arr_37 [i_10] [i_9] [i_10] [i_9] [i_7] [i_9] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_38 [i_9] [(signed char)8] [i_6] [i_9] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-843), (((/* implicit */short) arr_20 [i_5] [(short)12] [(short)12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((int) arr_36 [i_5 - 2] [i_6] [i_5 - 2] [i_9] [i_10]))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            arr_41 [i_5] [i_6] [i_9] [i_9] [(signed char)21] [i_5] [i_11] = ((/* implicit */_Bool) (~(-1LL)));
                            var_36 = (short)-1027;
                            arr_42 [i_9] = ((/* implicit */long long int) 13706364079459977455ULL);
                            var_37 = max((min((var_2), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4287327944U))))));
                            arr_43 [i_5 - 1] [i_5] [14U] [i_7] [5LL] [i_9] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) arr_25 [i_5] [i_5] [i_5 - 3] [i_5])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_25 [i_5] [17U] [i_7] [i_9]), (((/* implicit */unsigned short) (short)15))))))));
                        }
                        arr_44 [i_5 - 1] [i_6] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 162132976921152125ULL)) ? (arr_34 [i_5] [i_9] [(unsigned char)12] [4U] [i_7] [i_5]) : (((((/* implicit */_Bool) (unsigned short)22188)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))) ? (((var_2) / (arr_17 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        arr_45 [i_5] [i_6] [i_9] [i_5] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_5 + 1] [i_6] [17ULL])))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_5] [i_7] [i_5])) ? (min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (-9080140892008580181LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_9] [i_7] [i_5 + 1])) / (((/* implicit */int) arr_22 [i_7] [i_9] [i_7])))))));
                    }
                    arr_46 [i_5 - 3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_17 [i_7])))))) % (((arr_17 [i_5]) | (arr_17 [i_5 - 3])))));
                }
            } 
        } 
        var_39 *= ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])))))) || (((/* implicit */_Bool) -9080140892008580181LL))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(-9080140892008580186LL)))) >= (9943136950204345356ULL)));
    }
}
