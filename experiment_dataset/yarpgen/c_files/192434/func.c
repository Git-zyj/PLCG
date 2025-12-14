/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192434
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) 2106176374U);
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)23496), ((short)23501)))) || (((/* implicit */_Bool) var_8))))), (arr_7 [(signed char)7] [i_2 + 1] [i_2 + 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23506))))) ? (arr_14 [i_1] [i_4]) : (((/* implicit */int) (unsigned short)32969))));
                                arr_17 [(unsigned short)19] [(unsigned short)19] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) (short)-23506);
                                var_19 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 33554431)) ? (((((/* implicit */_Bool) -1807705406)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1544262925U))) : (((/* implicit */unsigned int) 1579941048))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min((-1807705386), (arr_14 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (2147483648U) : (((/* implicit */unsigned int) -465549363)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23496))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 388519764)) ? (-1579941041) : (-1)))))))))));
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40171)) ? (((/* implicit */int) (unsigned short)5772)) : (((/* implicit */int) (unsigned short)62871))))) ? (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)62871)))) : (((((/* implicit */_Bool) (unsigned short)59764)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)15)))))), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (_Bool)1)))), (388519749))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        arr_24 [(unsigned char)12] [i_6] [i_6] [(unsigned char)12] [i_6 - 1] [(unsigned short)4] |= ((/* implicit */unsigned char) (-(1807705405)));
                        arr_25 [i_0] [i_0] [i_0] [(unsigned short)19] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 905546314U)) ? (0U) : (4294967295U)))) ? (((((/* implicit */_Bool) 4294967289U)) ? (93114249) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_22 [i_1]))));
                    }
                }
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_21 &= (+(var_15));
}
