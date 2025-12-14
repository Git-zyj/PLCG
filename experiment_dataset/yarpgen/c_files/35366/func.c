/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35366
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (!(var_7))))) % (((((/* implicit */_Bool) -682901037)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))))), (max((var_8), (((/* implicit */long long int) var_6))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (((/* implicit */int) var_6))));
                        var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((var_3) < (((/* implicit */int) (signed char)115)))))));
                        var_12 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-6))));
                        arr_14 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3863528703U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-3017040880305557476LL)));
                    }
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_5)))) != (min((var_1), (((/* implicit */long long int) var_7))))))), (((((/* implicit */_Bool) (short)30589)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)127)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((var_0), ((signed char)-115)))), ((-(var_5)))));
        arr_19 [i_4] &= ((/* implicit */signed char) ((int) ((var_4) & (var_2))));
        arr_20 [i_4] [i_4] = ((min((((/* implicit */int) var_6)), (-562309902))) / (-276553478));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                {
                    var_15 = max((((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) ^ (var_8))), (((/* implicit */long long int) -625771258)));
                    arr_25 [i_4] &= ((/* implicit */_Bool) ((unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4))))));
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((max((0U), (((/* implicit */unsigned int) var_3)))) == (((/* implicit */unsigned int) (+(var_4)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)0))));
                                arr_30 [(signed char)7] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */_Bool) -682901037);
                                var_18 *= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (9320295133900786429ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-23))))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) (+(((int) max((((/* implicit */signed char) var_7)), (var_0))))));
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))))), (var_9)));
}
