/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237192
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) var_13);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (((-2147483647 - 1)) != (((/* implicit */int) (unsigned char)101))));
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3])))) > (((-1064576218) * (((/* implicit */int) (short)0))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_4 [i_0])))));
                var_18 = ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (unsigned short)20987)))) : (((((/* implicit */int) arr_8 [i_1] [(unsigned char)14] [i_1] [i_1] [i_1])) & (((/* implicit */int) ((unsigned short) arr_3 [i_1]))))));
                var_19 = ((((/* implicit */_Bool) min((-1074014403), (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (unsigned short)60615)))) : ((-(((/* implicit */int) (unsigned short)0)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (signed char)33);
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8337683134932555716LL)) ? (((/* implicit */int) arr_1 [i_5 - 2] [i_4 + 2])) : ((~(((/* implicit */int) arr_6 [i_4])))))) % (((((/* implicit */_Bool) (unsigned short)35621)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)51070))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4 + 2] [i_7 + 1] [i_6 + 1])) << (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_4 + 2] [i_4] [9U])) + (arr_0 [(short)11] [i_7 - 2])))) <= (var_6))))));
                            arr_19 [(short)4] [i_6] [i_6 - 1] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_5] [(short)9])) % (((/* implicit */int) (unsigned short)8573))));
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_5 - 2] [i_6] [i_7 - 2])))) + (var_1)));
                                var_24 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_14 [i_6])))));
                                var_25 = ((/* implicit */unsigned long long int) (~((-(((int) (unsigned char)81))))));
                            }
                        }
                    } 
                } 
                var_26 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5] [(unsigned short)4] [(short)4])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_4 + 1] [i_5] [i_4 - 1])), (var_11)))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1])) == (((/* implicit */int) arr_11 [i_4 - 1] [i_5] [i_5 - 2]))))))) * (((/* implicit */int) max(((signed char)69), (((/* implicit */signed char) (_Bool)0)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
