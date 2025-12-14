/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217104
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1 - 1] [5ULL] [i_1 - 3] [(_Bool)1] [i_2] [i_1 + 2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_3] [i_3] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [i_2] [i_3 + 1] [i_3 + 3])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_2] [i_3 + 2] [i_3]))))));
                            arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(arr_7 [i_0] [9U] [i_0 + 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) != (((var_6) << (((var_7) - (1353593300))))))))) : (min(((-(var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2067696172)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 3] [i_1 + 1])))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3])))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */_Bool) ((unsigned short) arr_19 [i_0] [i_1 - 2] [i_4] [i_5] [i_6]))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)118))))))));
                                var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(arr_0 [i_0 - 4] [4U])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 2] [2] [i_6] [i_5] [i_6] [i_1 + 1] [i_6]))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))))))));
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)1)))), (var_3))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((461093433) & (var_9)))) ? (var_5) : (((/* implicit */long long int) (+((-(var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 21; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_27 [i_10 - 1] [i_10 + 1])))) ? (((/* implicit */unsigned int) max((arr_29 [i_10 - 1] [i_9 - 1] [i_9 - 1]), (((((/* implicit */int) (_Bool)1)) | (var_8)))))) : (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)-11)))) ? (min((((/* implicit */unsigned int) var_9)), (var_3))) : (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (short)0)))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-77479906), (-846819021)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) ^ ((-(((/* implicit */int) var_1)))))) : ((-(var_7)))));
                            var_21 = ((/* implicit */unsigned int) (-(min((min((((/* implicit */long long int) var_2)), (var_12))), (((/* implicit */long long int) ((unsigned char) var_4)))))));
                            arr_33 [i_9] = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (short)-5)))), (((var_1) ? (var_7) : (var_13)))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_24 [i_7] [i_8]) : ((-(((/* implicit */int) (short)32755)))))) : (((((/* implicit */_Bool) ((arr_28 [i_7] [i_8] [i_9] [i_10]) | (((/* implicit */long long int) arr_26 [i_10] [i_10 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1681175842)) && (((/* implicit */_Bool) (unsigned char)102))))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_25 [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_5))));
                            arr_39 [i_7] [i_8] [i_11] [11] [i_8] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_8]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
