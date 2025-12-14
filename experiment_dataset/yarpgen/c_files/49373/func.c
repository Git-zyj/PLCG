/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49373
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) >> (((1065353216U) - (1065353196U)))))))))));
        var_13 = ((/* implicit */signed char) arr_0 [i_0 + 3]);
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)10977), (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_0 [i_0 + 2]))))) : (((4821789238283059154LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26214)) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_1 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [(unsigned short)9] [i_3 + 2] [i_3 + 2] [(unsigned short)9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_1] [i_3 + 2] [i_1] [i_1]))));
                    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1])) + (((/* implicit */int) arr_7 [i_3 - 1]))));
                    arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)101)) != (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_17 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)18511)) | (((/* implicit */int) arr_9 [i_1] [i_1]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_5] [i_5] [i_6 - 1] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [(signed char)2] [i_6 - 1] [i_6 - 1])))))) ? (3934954304U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_17 [i_4] [i_5] [i_7])))))))))));
                        arr_24 [i_5] [i_5 - 1] [i_6 - 1] [i_7] = (signed char)-73;
                    }
                } 
            } 
        } 
        arr_25 [i_4] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_22 [(signed char)14] [i_4] [i_4] [(signed char)4])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [14LL]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [(unsigned short)6])) : (((/* implicit */int) arr_17 [i_4] [8U] [i_4])))) : (((/* implicit */int) ((signed char) 4294967295U))))) - (((/* implicit */int) ((72057594037927808LL) > (((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_18 [(unsigned char)12] [i_4] [i_4] [(unsigned short)2])) - (74)))))))))));
        arr_26 [i_4] [(signed char)7] = ((/* implicit */unsigned char) arr_23 [(signed char)10] [(signed char)10] [(_Bool)1] [i_4]);
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (3229614072U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99)))))) ? (min((((/* implicit */unsigned int) (signed char)106)), (var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))))));
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 1U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2204))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2199)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 4294967289U)) ? (3540023244U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32747)))))));
}
