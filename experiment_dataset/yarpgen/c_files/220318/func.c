/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220318
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((max((arr_3 [i_0] [i_0]), (var_0))) & (var_7)));
        var_11 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)15)))) << (((((/* implicit */int) arr_1 [i_0])) + (84))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */int) var_7);
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 4; i_5 < 9; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_14 += ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_5)))) == (((/* implicit */int) (signed char)11)))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((unsigned long long int) (unsigned short)511)) << (((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)-1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_5 - 4])) ? (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned short)488)) / (((/* implicit */int) (short)-27584)))))))));
                        arr_23 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)-17), (((/* implicit */signed char) arr_21 [i_4])))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */int) ((unsigned short) (unsigned short)127))) ^ (((/* implicit */int) (signed char)63)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)77)), ((unsigned short)65034))))))));
    var_17 ^= (signed char)63;
}
