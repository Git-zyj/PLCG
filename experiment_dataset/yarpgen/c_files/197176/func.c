/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197176
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3170773109U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)201))))) ? (var_8) : (max((var_8), (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) min((((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) 7273146469731758283LL)) ? (((/* implicit */unsigned long long int) -8485761095541205662LL)) : (10372276530191889793ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-105))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_2)), (var_9)))) | ((~(((/* implicit */int) var_5)))))))));
                arr_5 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)57415)) <= (-1092429124))))) : (arr_1 [i_0] [i_1])));
                var_12 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)10598)) - (10574)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) / (234057153)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) 3170773109U)) ? (arr_1 [i_0 + 1] [i_0]) : (var_4)))))));
                var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((9223372036854775790LL), (((/* implicit */long long int) 1319579376))))))) ? (max((((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_8)))), (var_3))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [9U]))))), ((-(-1663891922246852776LL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [(_Bool)1] [i_2] [i_3] = ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [(unsigned char)5] [i_2] [i_2] [i_3]);
                            arr_12 [i_3] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) -952933817);
                            var_14 *= ((/* implicit */int) ((max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (-27LL))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
