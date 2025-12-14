/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192885
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3970439817U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-16273)) : (((/* implicit */int) (signed char)57))))) : (0LL)));
    var_12 &= ((/* implicit */unsigned int) var_8);
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = arr_1 [i_0 - 1];
        var_15 = ((/* implicit */int) (~(-1LL)));
        var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4919))) : (var_5)));
    }
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) (-(var_7)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
            {
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 324527478U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 2]))) : (var_7)));
                arr_12 [i_1] [i_1] [i_3] = (((!(((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_2] [i_1])))) || (((/* implicit */_Bool) ((long long int) 644191238U))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
            {
                var_19 = ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (66571993088ULL)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)58500)), (3630328321030756936LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_4]))))));
                var_20 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) 17U)) ? (((/* implicit */long long int) 0)) : (arr_15 [14] [i_2] [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_2])))))))));
            }
            var_21 = min((min((-1LL), (((/* implicit */long long int) (unsigned short)31444)))), (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_1 + 1] [i_1 + 2] [i_2]) : (arr_15 [i_2] [i_2] [5]))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
        {
            arr_20 [i_5] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1023))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) var_0);
                            arr_29 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_8))))));
                            var_23 = ((/* implicit */signed char) arr_3 [i_1 + 1]);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned int) arr_25 [i_7 - 1] [i_1 + 2])))));
                            arr_30 [i_1 + 2] [i_5] [4LL] [(unsigned short)4] [i_6] [13] [i_8] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 4; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_25 &= ((/* implicit */int) ((long long int) arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 1]));
                        var_26 = ((/* implicit */signed char) ((unsigned int) arr_18 [i_10 - 3] [i_9] [i_5]));
                        var_27 = ((((/* implicit */_Bool) arr_21 [i_1 + 2] [i_10 + 1] [i_10])) ? (((/* implicit */int) var_1)) : (var_8));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5]))) : (var_3))))));
                    }
                } 
            } 
        }
        arr_36 [i_1] = ((/* implicit */signed char) 3630328321030756936LL);
        var_29 = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_24 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])) <= (var_5)))), ((signed char)0)));
    }
}
