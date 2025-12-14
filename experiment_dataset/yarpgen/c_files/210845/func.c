/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210845
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
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))), (var_0)))) ? ((-(max((((/* implicit */int) (short)-1)), (var_2))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned int) -334674083))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_4])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [8] [7] [i_2] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) max(((unsigned short)45080), (((/* implicit */unsigned short) (_Bool)1)))))))) : ((+((~(((/* implicit */int) (short)-14))))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) / (arr_11 [i_0] [i_1])))))) ? (((/* implicit */int) max(((unsigned char)176), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2097152)) || (((/* implicit */_Bool) (unsigned short)32768)))))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) ((1698167208U) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(min((arr_9 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3]), ((+(((/* implicit */int) var_7)))))))))));
                                var_18 = ((/* implicit */short) (~(2097152)));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 411579090))));
                            }
                        } 
                    } 
                } 
                var_20 = 8656662446811486468ULL;
                arr_13 [i_0] = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (!((_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1629459154U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (arr_8 [i_0] [(unsigned short)0] [(unsigned short)8] [(unsigned short)0] [(short)7] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (max((8400175071380345470ULL), (((/* implicit */unsigned long long int) (unsigned short)59982)))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            {
                                arr_21 [i_7] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_22 [8LL] [8LL] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) arr_2 [i_0]);
                            }
                        } 
                    } 
                } 
                var_21 = (unsigned short)32766;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_12)) : (var_2))), (((/* implicit */int) var_9))))) : (var_3)));
}
