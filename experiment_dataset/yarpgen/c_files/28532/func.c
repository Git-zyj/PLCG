/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28532
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) (!(var_0))))), (7642527016816833567LL)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3860710909U) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))) ? (434256382U) : (((((/* implicit */_Bool) (unsigned char)62)) ? (max((((/* implicit */unsigned int) var_4)), (434256386U))) : (((/* implicit */unsigned int) -578111721))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2839987455U)) == (arr_5 [14U] [i_0 - 1] [i_0 - 1] [i_0])));
                            arr_11 [i_2] [i_3] [i_4] = (-(434256362U));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1215746877)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4]))) / (var_5))) : (((/* implicit */long long int) 3860710909U))));
                            var_15 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (3860710909U))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) 3860710909U)) > (var_5))))));
                            arr_14 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) (+(arr_3 [i_0] [i_3]))));
                            arr_15 [i_0] [i_0 - 1] [i_1] [(unsigned char)9] [i_0] [(unsigned char)9] = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 434256379U)) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [10U] [i_0 - 1])) : (((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(1454979841U)))) <= ((~(2337191826619192463ULL)))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4607199647495762983LL))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(signed char)6] [i_2] [i_6])) ? (8967139405485822834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))) : (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_6] [i_6])))))));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4607199647495762973LL)) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_7] [(_Bool)1] [i_0])) : (2839987439U)));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 12427483416224623295ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 434256394U)))))) : (arr_4 [i_0 - 1] [i_1] [i_2] [i_3 - 1])));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) | (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (5274171652386628895LL)))) : (((/* implicit */int) (short)-10676))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 3; i_8 < 23; i_8 += 2) 
                        {
                            arr_26 [20] [i_8] [20] [i_8 - 3] [i_8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2141012705780268932LL)) ? (4607199647495762976LL) : (((/* implicit */long long int) 3459701577U))))) ? ((+(((/* implicit */int) (unsigned char)163)))) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [(unsigned char)15]))));
                            arr_27 [i_0] [i_1] [i_8] [i_2] [(signed char)14] [i_8] [4LL] = ((/* implicit */signed char) (!((_Bool)0)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-7685237146045385224LL) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_3])))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26669)))) : (((((/* implicit */_Bool) 1261015492)) ? (var_4) : (((/* implicit */int) var_10))))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((int) arr_24 [i_0] [i_0 - 1] [2] [i_0] [i_0 - 1]));
                            var_25 = ((/* implicit */int) ((arr_20 [i_0 - 1] [i_0 - 1] [i_0]) > (arr_21 [17LL] [i_3 + 1])));
                            var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)51670)) ? (var_4) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_31 [i_0] [(signed char)4] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) arr_30 [i_0] [i_1] [4] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_20 [i_0 - 1] [i_0 - 1] [i_0])) : (12427483416224623295ULL)));
        var_28 &= ((/* implicit */long long int) 7974606876192736189ULL);
    }
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */long long int) min((993638551U), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_18 [17ULL] [(unsigned short)2] [i_10])) / (var_4))))))));
        arr_36 [i_10] = ((/* implicit */int) 3860710915U);
    }
    var_29 = ((/* implicit */unsigned short) ((((6019260657484928320ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7373))))))) / (((/* implicit */unsigned long long int) var_3))));
}
