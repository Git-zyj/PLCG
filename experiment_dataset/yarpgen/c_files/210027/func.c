/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210027
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
    var_19 = ((/* implicit */unsigned char) 1284493844);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) var_11);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0]) > (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 67108863LL)) ? (-406664637) : (406664625)))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]);
                    var_22 |= ((/* implicit */short) ((_Bool) (short)10580));
                    var_23 = ((/* implicit */long long int) 1278899691);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [(unsigned char)12] [i_3] [i_4 - 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (arr_9 [i_0] [i_3] [i_4]) : (((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (((/* implicit */int) var_14))))) ? (((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((var_4) - (2967255432266639949ULL))))) : (((/* implicit */int) ((406664626) == (2147483647))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 406664643)) ? (((/* implicit */int) (unsigned short)53750)) : (((/* implicit */int) (unsigned short)20951))))) ? (((((/* implicit */int) (signed char)62)) ^ (2147483644))) : (((/* implicit */int) var_15)))));
                    arr_14 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) 77218587);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_25 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) (unsigned short)30169)))) ? (min((127ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) min((-2575085393665838957LL), (((/* implicit */long long int) (signed char)-54))))))) >> ((((+(((/* implicit */int) (short)-19953)))) + (19959)))));
        var_26 = ((/* implicit */int) (+(var_12)));
        var_27 = ((/* implicit */unsigned short) var_8);
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-29)) ? (-2147483626) : (((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), ((unsigned short)5151)))) | (((/* implicit */int) ((_Bool) (short)-13185)))))));
}
