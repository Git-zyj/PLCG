/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38414
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
    var_17 = ((/* implicit */int) var_13);
    var_18 = ((4287846257U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-1)))) : (942845803)))) ? ((+((+(((/* implicit */int) (signed char)112)))))) : (((/* implicit */int) (short)(-32767 - 1)))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [4] [i_1 + 1] = ((/* implicit */unsigned long long int) (signed char)-45);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? ((+(((((/* implicit */_Bool) 16U)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_2])) & (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_1 [i_0]))))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_10)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((arr_3 [i_0] [i_2]) ? (((/* implicit */int) var_3)) : ((+(((-1927195110) & (((/* implicit */int) (signed char)-112)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [(signed char)17] [16LL] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (var_0) : (-7243095257665558784LL)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (var_15)))) ? (((16919112544386496560ULL) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50992)))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_14))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((((/* implicit */int) arr_1 [(signed char)14])) & (((/* implicit */int) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_1 - 1] [i_1 + 1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)158))))) : (var_7)));
                        arr_20 [i_0] [i_1] [i_1] [(signed char)2] [i_2] [i_4] = ((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_1] [i_0]);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 437560833U)) ? (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0])) : (-1779183188)))) ? (-131468075) : (((((/* implicit */_Bool) 134217727)) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [10LL] [10LL] [i_4 + 1] [6U] [(unsigned short)16] [i_0]))))))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        arr_25 [i_2] [i_5] [i_0] = (-(((/* implicit */int) arr_3 [11U] [i_2])));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_5])) != (((/* implicit */int) var_10))))))))));
                        var_26 *= ((/* implicit */_Bool) arr_22 [i_0] [i_0]);
                        arr_26 [1] [i_2] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7121038U)) ? (((/* implicit */int) arr_3 [i_0] [(signed char)4])) : (((/* implicit */int) (_Bool)0)))) > (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned short)8482)) : (((/* implicit */int) (signed char)-15))))));
                        arr_27 [i_0] [i_1] [i_5] [i_2] [17LL] = ((/* implicit */short) (_Bool)1);
                    }
                }
            }
        } 
    } 
}
