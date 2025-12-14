/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224032
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */short) max((max((((var_3) ^ (1016888692U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (var_8) : (((/* implicit */int) (unsigned short)32355))))))), ((~(((unsigned int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]))))));
                                var_10 = ((/* implicit */signed char) min((arr_6 [i_0] [i_2] [i_2] [i_3]), (arr_6 [i_3] [i_2] [i_2 - 1] [i_3])));
                                arr_13 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)3)) << (((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) + (910595217)))))));
                                var_11 = ((/* implicit */unsigned long long int) (unsigned char)13);
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) 1582702665U);
                /* LoopNest 2 */
                for (short i_5 = 4; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            arr_19 [i_6] = ((((/* implicit */_Bool) (+((-(var_0)))))) ? (min((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1))))), ((~(var_8))))) : (((/* implicit */int) arr_16 [i_0] [i_1])));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((short) (unsigned char)227))))), ((~(((/* implicit */int) ((unsigned short) var_9)))))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_4 [i_0] [i_1]) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))) * (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */int) arr_0 [i_9 + 1])) : (((((/* implicit */int) (short)26529)) << (((((/* implicit */int) (unsigned char)109)) - (105)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)10))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (short)-32759)) ^ (((/* implicit */int) ((short) 5LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
