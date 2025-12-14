/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45502
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) var_0))))), (var_11)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [(unsigned short)2] [i_4] [i_1 + 1] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_11)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_4))))))));
                                arr_14 [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) : ((~(var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) 3895122545182224552ULL)))))) : (min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_4)), (var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_1 + 1] [0U] [i_1] [i_1] [(unsigned char)8] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (min((((/* implicit */long long int) 3606121155U)), (8687903169149685353LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-8651701243784821600LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))))) ? (((int) var_2)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_10))))))) : (((min((var_5), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)43)))))))));
                                arr_20 [i_0] [i_2 + 1] [9LL] [9LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (((unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) min((4009228582353235954LL), (((/* implicit */long long int) (_Bool)1))))) : (min((((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7733111580128750901LL)) ? (1693880546) : (((/* implicit */int) (_Bool)0)))))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (var_2)))))) & (((long long int) max((((/* implicit */long long int) var_0)), (-6211869521551753138LL))))));
                                arr_21 [i_0] [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), ((~(var_3)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_2))), (((/* implicit */int) max((var_1), (var_10))))))) : (var_6)));
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_9))))) : (((((/* implicit */unsigned long long int) var_2)) + (var_5))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)160)), (6211869521551753137LL)));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */short) var_9))))) < (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_1)))))))))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_0] [i_1 - 3] [i_7] = ((/* implicit */long long int) var_11);
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (var_9)))), (((unsigned short) (_Bool)1)))))))))));
                    arr_26 [i_0] [i_0] [(short)6] |= ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */int) ((var_2) > (((/* implicit */int) var_8))))) > (((/* implicit */int) var_1))))), (var_10)));
                }
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    arr_31 [i_0] [i_0] [i_8 + 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (min((var_6), (((/* implicit */unsigned long long int) var_0))))))) ? (min(((~(var_6))), (((/* implicit */unsigned long long int) (~(2666183759U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) & (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)))))));
                    arr_32 [i_0] [i_1 - 2] [i_1 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) : ((-(var_3)))))));
                    arr_33 [i_0] [i_1] [3ULL] [8U] = ((/* implicit */short) ((unsigned long long int) min((-1786602345), (((/* implicit */int) (unsigned short)32768)))));
                    arr_34 [i_0] [i_8] = (+(((/* implicit */int) ((short) ((3660636928U) - (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                }
                arr_35 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                arr_36 [i_0] [i_0] = var_4;
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    for (signed char i_10 = 4; i_10 < 8; i_10 += 4) 
                    {
                        {
                            arr_43 [i_1] [i_1] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((int) var_9));
                            var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1991327904868244494LL)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15)))))), (((int) (unsigned short)8038))));
                            arr_44 [i_0] [i_0] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) var_4)))))));
                            var_17 = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_11);
}
