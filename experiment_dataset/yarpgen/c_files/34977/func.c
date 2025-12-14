/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34977
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)50)) : (var_16)))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14839243500549448710ULL)) ? (8601915561818558364LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)17))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))) : (((unsigned int) (unsigned char)21))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18027))) : (12523656413305095765ULL))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 2682889742157904010ULL)) ? (((/* implicit */unsigned long long int) 1193733561U)) : (16777215ULL)));
                            arr_11 [15U] [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) 3005444331190099675LL))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 2])) ? (((unsigned long long int) (signed char)-64)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 1])))))));
                        }
                    } 
                } 
                var_23 = (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    for (int i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_15 [i_4 - 3] [10] [i_4] [10])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_8 [i_5 - 2] [i_1 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) 5961617317933790587ULL)) && (((/* implicit */_Bool) var_2))))))) + (12747))))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_1 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)18011))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 420914415)) : (8269937394086203765ULL)))));
                            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(-1491969385)))) >= ((-(((arr_13 [i_0] [i_0] [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (short)18018)))))))));
                            arr_17 [i_1] [i_0] [i_4 - 3] [i_4 - 3] = ((/* implicit */int) ((((unsigned int) (short)18043)) | (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (+(arr_3 [i_4]))))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((27U) >> (((3005444331190099648LL) - (3005444331190099626LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)29481)))) : ((+(1856563024U)))));
            }
        } 
    } 
}
