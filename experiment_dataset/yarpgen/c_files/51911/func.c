/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51911
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
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (-((~((+(1619157671U)))))));
                    var_21 = ((unsigned short) ((((1954641060U) < (((/* implicit */unsigned int) 1974434734)))) ? (442900691U) : (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13583)))))));
                    var_22 = ((/* implicit */unsigned short) var_2);
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7443255973600011232LL)) || (((/* implicit */_Bool) 2573355836U)))))) != (((-1057304255062352918LL) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_1] [i_2]))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_16))))))) : (((max((-4480630357992983122LL), (arr_1 [i_0]))) << (((/* implicit */int) arr_2 [i_1])))))))));
                    var_24 |= ((/* implicit */short) (-(((unsigned int) arr_1 [i_0 - 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) % (max((((((-4480630357992983122LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_10 [i_3] [i_5])) - (61))))), (((/* implicit */long long int) var_0))))));
                        var_26 = ((/* implicit */short) ((unsigned int) var_6));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_4] [i_5] [3] [i_4])) + (((/* implicit */int) max(((short)-13624), (max(((short)-2249), (arr_9 [i_3] [i_4] [(short)7]))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (+(arr_8 [i_3] [i_5]))))))))));
                            var_29 += ((/* implicit */int) ((unsigned char) var_19));
                            var_30 = ((/* implicit */long long int) arr_11 [i_3] [i_4]);
                        }
                        var_31 = ((/* implicit */short) 989127811059602097LL);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_3] [i_3] [i_4] [i_5] [10] [i_7]), (arr_13 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7])))) || (((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_5] [i_7]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_33 = ((/* implicit */int) ((arr_8 [i_3] [i_3]) > (arr_13 [i_3] [i_4] [i_4] [i_5] [12LL] [i_9])));
                        var_34 = ((/* implicit */long long int) max((var_34), (((long long int) arr_9 [i_3] [i_3] [15]))));
                    }
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]))) == (((((/* implicit */_Bool) max((8930232504330111490LL), (((/* implicit */long long int) arr_7 [i_3]))))) ? (max((var_2), (((/* implicit */long long int) var_6)))) : (((4480630357992983122LL) & (var_4)))))));
                    var_36 = ((/* implicit */short) ((unsigned int) 8208523808157029809LL));
                    var_37 &= ((/* implicit */int) ((((/* implicit */_Bool) min(((-(arr_16 [i_4] [i_4] [(_Bool)1]))), (((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_4] [i_5])) + (75)))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) (-(arr_11 [i_4] [i_4])))) / (((-4480630357992983140LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))))));
                }
            } 
        } 
    } 
}
