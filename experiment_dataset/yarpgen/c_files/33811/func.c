/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33811
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
    var_11 = ((/* implicit */unsigned char) 9109474934306399924ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) ? (((((/* implicit */_Bool) (short)30102)) ? (2147483647) : ((~(2147483638))))) : ((-(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) arr_3 [i_1]);
            var_14 = ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
            var_15 = ((/* implicit */unsigned char) var_3);
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_11 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_2 [i_0] [i_4]), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) 1492549254323228131ULL)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0]))))))) ? (15741022596292863547ULL) : (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_2]))))));
                        var_16 = ((((/* implicit */_Bool) -9223372036854775782LL)) ? (((/* implicit */int) (_Bool)1)) : (-2763059));
                        var_17 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) var_3)), (9337269139403151692ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0] [i_0] [i_2] [i_2]))))));
            arr_12 [i_0] [i_2] [(unsigned char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8302468913158463320ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        }
    }
    /* LoopNest 2 */
    for (short i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (short i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) + (((/* implicit */int) arr_4 [i_9] [i_8] [i_5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))) : (((unsigned int) (-(((/* implicit */int) arr_24 [i_8] [i_9])))))));
                                var_20 = ((/* implicit */short) min((max((11717822997666252469ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((arr_22 [i_5] [i_7] [i_7] [i_5 - 1]) ^ (arr_22 [i_5] [i_5] [i_7] [i_5 + 1]))))));
                                var_21 = ((/* implicit */unsigned char) 10U);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((unsigned int) min(((-(arr_18 [i_6]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned short) (unsigned char)0))));
}
