/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236932
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 = var_4;
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */long long int) min((((short) (signed char)127)), (((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 924506314U))))), ((signed char)-126))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)-29007)) + (max((((/* implicit */int) (signed char)63)), (2147483647)))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ^ (((long long int) (unsigned char)184))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)63642)) : (((/* implicit */int) (short)32737)))) : (max((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))), (1661581041))))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-83)) ? (var_8) : (((/* implicit */int) (_Bool)1)))) / (arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((23U) >> (((arr_8 [i_1 + 1] [i_1 - 1] [i_3 + 1] [i_3]) + (653262420))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_2])) : (-1386218406)))))))));
                    var_21 = ((/* implicit */_Bool) var_7);
                    var_22 = ((/* implicit */_Bool) max((var_22), ((!(var_1)))));
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) max(((signed char)-119), (((signed char) var_0))))) : (((/* implicit */int) max((arr_7 [i_2] [i_1 - 3]), (((/* implicit */unsigned short) (unsigned char)66)))))));
                    var_24 = ((/* implicit */signed char) ((((int) (unsigned short)12)) + (((((/* implicit */int) (short)-8308)) * (((/* implicit */int) arr_6 [i_1 - 3]))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))))))), (((/* implicit */int) arr_15 [i_4] [i_4]))));
        arr_16 [i_4] = ((/* implicit */int) (~(((arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680)))))));
        var_26 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50135)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((9U) | (((/* implicit */unsigned int) arr_10 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (3719784015U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) < (1348336089U))))))) : (((arr_9 [(short)18]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))));
    }
    var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22904))) % (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-101)) * (((/* implicit */int) var_4))))) * (var_12))));
    var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) var_4)) ? (144115188075855871LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? ((+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)32757)))))) : (((/* implicit */int) (short)-20466))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)16)) : (var_8))) ^ (((1144276319) | (((/* implicit */int) (unsigned char)69))))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))) : ((~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))))));
}
