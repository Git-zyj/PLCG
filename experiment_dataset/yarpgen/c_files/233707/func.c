/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233707
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_14))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64)))))));
                                var_16 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_5))))))));
                                var_17 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                }
                for (short i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_18 = ((/* implicit */signed char) ((max((arr_2 [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) (short)-5494)))) + (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                    var_19 = (_Bool)0;
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_20 [i_6] [i_6] [(unsigned short)2] = ((/* implicit */_Bool) arr_6 [(signed char)6] [(unsigned short)2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) 796979910);
                    var_23 = ((/* implicit */int) ((((/* implicit */int) var_10)) != ((~(((/* implicit */int) (short)-1))))));
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_13);
                    arr_28 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)21226)))) | (((/* implicit */int) (unsigned char)128))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_9] [i_11] [i_0] = ((/* implicit */signed char) (~(((unsigned long long int) (short)9991))));
                                arr_37 [i_0] [(signed char)5] [i_11] [(signed char)5] [i_10] [i_11] [i_11] = ((/* implicit */short) (_Bool)1);
                                var_24 = ((/* implicit */short) min((((/* implicit */int) ((signed char) var_12))), (max((var_12), ((-(((/* implicit */int) (short)32750))))))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned long long int) var_12);
                var_26 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [10ULL] [i_1] [i_1]))))));
                arr_38 [i_0] [i_1] [i_0] = ((/* implicit */short) ((int) min((16960620669478125269ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)-32)))))), (((/* implicit */int) (_Bool)1))));
    var_28 = ((/* implicit */signed char) ((long long int) var_8));
    var_29 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
}
