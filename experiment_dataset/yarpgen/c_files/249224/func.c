/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249224
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((var_12), ((signed char)22))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [(signed char)6] [(unsigned short)15] [6] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) >> (((arr_4 [i_2 - 1] [i_0]) - (1890572601489108143LL))))), ((-(((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (short)-18164))))))))) : (((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) >> (((((arr_4 [i_2 - 1] [i_0]) - (1890572601489108143LL))) + (3691305983991835890LL))))), ((-(((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (short)-18164)))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), ((signed char)75)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_0] [i_6] = (-(((((/* implicit */_Bool) var_2)) ? (-1365471471) : (((/* implicit */int) var_13)))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (var_1) : (((/* implicit */int) (signed char)-59))));
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) 6884015252829688465LL)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [11LL] [(signed char)15])) : (arr_17 [i_0] [7LL] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5 - 1])))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned int) (-(arr_24 [i_7 - 2] [i_5] [(short)2] [i_5 - 1])));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) % ((-2147483647 - 1))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)162)) >= (((/* implicit */int) (signed char)-111)))) ? (arr_7 [i_5 - 1] [i_5 + 2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_11))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) var_0)) == (arr_8 [i_0] [i_0] [i_0])));
                    }
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) -1105567658)) : (12288U)));
                    arr_28 [i_1] [i_0] [i_0] [10U] = ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_6 [i_5 + 3] [i_5 + 3] [i_5 + 2])));
                }
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)-15154)))))));
                var_26 = (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 4194303))))), ((-(((/* implicit */int) var_12)))))));
                arr_29 [i_0] [1LL] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) min((var_27), ((-((~(((((/* implicit */long long int) ((/* implicit */int) var_14))) / (-4392099308027969333LL)))))))));
}
