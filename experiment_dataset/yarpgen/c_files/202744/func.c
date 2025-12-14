/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202744
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((signed char) var_1));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) << (((((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) ^ (var_1))) + (8577617914771409961LL)))))) ? (((/* implicit */int) ((short) var_9))) : ((-(((/* implicit */int) var_9))))));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) == (((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (55800))))))))));
    }
    var_15 &= ((/* implicit */long long int) ((unsigned long long int) (-((~(((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)97))))))));
    var_17 = ((/* implicit */signed char) (-((((+(((/* implicit */int) var_9)))) - (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (signed char)-91)))))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            {
                arr_8 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) var_7)))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_11 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << ((((~(-3433297060454372992LL))) - (3433297060454372991LL)))));
                    var_19 += ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_7))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)24617));
                                arr_22 [i_1] [(signed char)15] [i_4] [i_5] = ((/* implicit */signed char) ((_Bool) var_3));
                                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) << (((((/* implicit */int) var_5)) - (109)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)))))));
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 821066647))))))));
                    arr_27 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (-(var_1)))) || (((/* implicit */_Bool) 914479746)))));
                }
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))) : ((((-(((/* implicit */int) var_2)))) + ((+(((/* implicit */int) var_4)))))))))));
            }
        } 
    } 
}
