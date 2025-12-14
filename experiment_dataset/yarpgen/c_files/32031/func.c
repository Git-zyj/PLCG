/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32031
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)60))) : (var_4))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250))))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) var_6)) : (var_5))) < (-3085046380061149972LL))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) var_9)) ? (var_4) : (arr_0 [i_0])))));
                        arr_11 [i_0] [6ULL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((var_8) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) ? (var_1) : (var_0)));
                        arr_12 [i_0] [i_0] [(unsigned char)0] [i_0] [0U] = ((((/* implicit */_Bool) (signed char)-123)) ? (8435063914851992755LL) : (-9060818281030711053LL));
                    }
                    arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((unsigned char)40), (((/* implicit */unsigned char) ((-8435063914851992755LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-7446))))))))), (max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (var_9)))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(9766304512818520889ULL)))) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)4095)) != (-1324833590)))))) : (((/* implicit */int) min(((unsigned char)239), ((unsigned char)22)))))))));
                    var_14 = ((/* implicit */unsigned short) var_10);
                }
                for (unsigned short i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)45))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7898)))) / (((/* implicit */int) max((var_7), ((signed char)124))))));
                        var_17 = ((/* implicit */int) (~(min((((/* implicit */long long int) (unsigned short)12288)), (var_5)))));
                        arr_21 [i_5] [i_4] [8LL] [5U] [i_0] = ((/* implicit */unsigned short) min((((long long int) arr_2 [i_0] [i_0])), (max((max((((/* implicit */long long int) var_7)), (-848908180404427625LL))), ((-(6541787220513737957LL)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 6; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) var_10);
                            arr_28 [i_0] [i_6] [i_4 + 2] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)11684)) : (((/* implicit */int) (_Bool)1))));
                            arr_29 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) arr_2 [i_4 + 1] [i_4 + 2]);
                        }
                        var_18 = ((/* implicit */signed char) min((max((max((var_0), (((/* implicit */unsigned long long int) -3085046380061149963LL)))), (((/* implicit */unsigned long long int) 3579641388U)))), (max((5442852293696414799ULL), (((/* implicit */unsigned long long int) 9060818281030711068LL))))));
                        var_19 &= var_9;
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)194);
                                var_20 = ((/* implicit */int) min((var_20), (((int) (unsigned short)64907))));
                                arr_36 [i_0] [i_1] [i_1] [i_8] [i_9] = ((((/* implicit */_Bool) ((long long int) 3085046380061149955LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)59035)) || (((/* implicit */_Bool) var_7)))))))) : (((long long int) var_8)));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_2))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_4);
    var_23 = var_4;
    var_24 = ((/* implicit */long long int) var_7);
}
