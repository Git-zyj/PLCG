/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49522
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) arr_2 [i_0]);
                arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1 + 1]));
                arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 2])))))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) < ((+(609353832U)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15295)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(arr_0 [i_1 - 1] [i_1 - 1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15277))) < (var_1)));
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (short)15277);
                                arr_21 [i_2] [i_4] = ((/* implicit */unsigned long long int) var_16);
                                arr_22 [i_2] [i_3 + 1] [8ULL] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47741)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (signed char)-123)))))));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)53947)))) < (((((/* implicit */int) (unsigned char)2)) & (((/* implicit */int) var_2))))))) < ((+(((/* implicit */int) (unsigned short)15737))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */int) ((0ULL) < (max((((/* implicit */unsigned long long int) arr_0 [i_5] [i_3 - 1])), (9097067699243217536ULL)))))) < (((/* implicit */int) min((arr_18 [i_3 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [(signed char)10]), ((unsigned short)32040))))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_3 - 1] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((arr_1 [i_3 + 1]) < (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_3 - 1])))))) < (arr_17 [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 1])));
                    arr_25 [i_3] [i_4] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)63))));
                }
            } 
        } 
    } 
}
