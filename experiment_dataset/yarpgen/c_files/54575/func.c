/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54575
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [(unsigned char)8] &= ((/* implicit */_Bool) min((((signed char) (_Bool)1)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)5])) || (((/* implicit */_Bool) ((signed char) (_Bool)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_13 *= ((/* implicit */short) (((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) var_8)))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)6)))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)52558))))));
                            var_15 = ((/* implicit */_Bool) (unsigned short)26052);
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)52566)))))));
                            var_17 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)7] [i_3] [i_3] [i_4]))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)52562)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)208)) / (arr_1 [i_1 + 1] [i_1 + 1])));
                    arr_19 [i_0] [i_5] = ((/* implicit */unsigned short) (-(var_0)));
                }
                var_20 = ((/* implicit */int) min((var_20), (var_0)));
            }
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(16708850495240475430ULL)))));
        }
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_9))));
        var_23 = ((/* implicit */long long int) var_12);
        var_24 = ((/* implicit */short) (+((+(min((16708850495240475416ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (var_11) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) (short)-29779)) : (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1)))))));
        var_25 = ((/* implicit */unsigned char) var_9);
    }
    for (short i_7 = 3; i_7 < 12; i_7 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((((/* implicit */int) arr_23 [i_7 - 2] [i_7 + 1])) / (((/* implicit */int) (unsigned char)162)))) % (((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_7 - 2] [(signed char)10])), (var_5))))));
        arr_28 [i_7 - 3] = ((/* implicit */long long int) (short)-24784);
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (min((((/* implicit */unsigned short) (short)7059)), ((unsigned short)26052)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)57873)))) : ((-(((((/* implicit */_Bool) 661019912U)) ? (((/* implicit */int) (unsigned short)39484)) : (((/* implicit */int) (signed char)-44))))))));
    var_28 ^= var_11;
    /* LoopSeq 1 */
    for (unsigned char i_8 = 3; i_8 < 14; i_8 += 1) 
    {
        var_29 = ((/* implicit */short) (unsigned short)36728);
        var_30 = ((/* implicit */signed char) (unsigned short)22618);
    }
}
