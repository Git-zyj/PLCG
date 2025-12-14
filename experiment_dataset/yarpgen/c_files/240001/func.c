/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240001
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (2147483647))))))));
                                var_15 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned char)163)), (4095))) != (arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])));
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4] [i_2 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
                                arr_15 [i_1] [i_4] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) : (max((1378155936U), (1043377327U)))))) ^ (arr_10 [i_4] [i_1] [i_2 - 3] [i_1] [i_0]));
                                var_16 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) var_0))), (max((-1285805708), (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    var_17 = max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-14369)) <= (((/* implicit */int) (unsigned char)5))))) & (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)5))))))), ((-(776887397543671813LL))));
                    arr_16 [i_0] [i_1] = ((/* implicit */long long int) (signed char)127);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)-51))));
                var_19 = (_Bool)1;
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((((/* implicit */_Bool) max(((unsigned char)5), (((/* implicit */unsigned char) (signed char)87))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)50)))))))));
                    var_21 *= ((/* implicit */unsigned long long int) (((-(max((var_2), (((/* implicit */long long int) arr_24 [i_7])))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_28 [i_7])) && (((/* implicit */_Bool) -1031719445)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (unsigned char)156)) || (((/* implicit */_Bool) -859804014)))))) ? (((/* implicit */int) (unsigned short)29931)) : (((/* implicit */int) var_5)))))));
}
