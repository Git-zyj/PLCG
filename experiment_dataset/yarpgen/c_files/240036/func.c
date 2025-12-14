/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240036
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
    var_17 = ((/* implicit */unsigned long long int) ((signed char) var_2));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) (short)32402))))) * (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) var_5))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-112)) : (1295357642)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56166))) > (9002801208229888LL)));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
            {
                var_20 = ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) : (15488117568535938419ULL));
                arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((-5558354288457538150LL) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3]))));
                arr_14 [i_0] [i_0] [i_3] = ((signed char) arr_10 [i_0] [i_1] [i_0 + 1] [i_0]);
            }
            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_17 [i_4] [i_0] [i_0] [12] = (unsigned short)41659;
                arr_18 [i_0] = (-(((/* implicit */int) arr_15 [i_1] [i_1] [i_0 - 1] [i_0])));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-6050018092998509452LL) / (((/* implicit */long long int) 115628996))))) || (((arr_15 [i_0] [i_1] [i_4] [i_0 + 1]) && (((/* implicit */_Bool) var_3))))));
            }
            var_23 = ((/* implicit */short) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) - (8492)))));
        }
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_24 = ((/* implicit */signed char) arr_3 [i_5 + 2] [i_0 + 1] [i_0 - 1]);
            var_25 = ((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)31896)) : (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned short)64551)) : (((/* implicit */int) (short)-11302)))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32402)) ^ (((/* implicit */int) (short)-13449))));
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_24 [(signed char)3] = ((/* implicit */unsigned int) ((short) max((-545412912), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)977))) > (6610828691869037733LL)))))));
        arr_25 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                {
                    arr_37 [i_7] [i_8] = ((/* implicit */unsigned short) (-((~(var_15)))));
                    var_26 = ((/* implicit */signed char) (~(min((var_13), (((/* implicit */long long int) (~(2901581107U))))))));
                    var_27 = ((/* implicit */short) (-(((arr_32 [i_9]) / (((/* implicit */long long int) -182222343))))));
                }
            } 
        } 
        var_28 = ((int) ((1125899906842623LL) / (((/* implicit */long long int) arr_34 [10U]))));
    }
    var_29 = ((/* implicit */long long int) var_5);
    var_30 = ((/* implicit */unsigned long long int) (short)-32403);
}
