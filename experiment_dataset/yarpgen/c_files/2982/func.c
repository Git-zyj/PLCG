/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2982
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
    var_10 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) -1)), (-1784737280416594638LL)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_11 = ((((/* implicit */_Bool) -1784737280416594633LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)114))) : (1718393588U));
        var_12 ^= ((((((/* implicit */_Bool) ((long long int) var_1))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7680))))));
        arr_4 [i_0] = ((/* implicit */long long int) (((((+(var_6))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) || ((!(((((/* implicit */int) var_7)) >= (((/* implicit */int) var_1))))))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_2)));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(var_5))) : (((/* implicit */int) ((unsigned char) var_9)))));
            var_15 = ((/* implicit */signed char) var_9);
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) ((signed char) var_5)))));
        }
        var_17 = ((/* implicit */_Bool) ((unsigned int) 3235595838281858517ULL));
    }
    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) var_5);
        var_19 += (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))), ((+(var_9)))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned char i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_6) < (((/* implicit */int) var_7))))))));
                    arr_21 [i_3 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) ? (2860334282889149471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) (~(var_9))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_2))) < (min(((~(var_5))), (((int) var_4))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((max((((/* implicit */unsigned int) var_5)), (var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
}
