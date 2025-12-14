/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25659
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
    var_11 *= ((/* implicit */unsigned long long int) max(((~(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (var_2)))))))));
    var_12 = (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_8)))))), (max((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_7)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (var_10)));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) var_3)) ^ (((((/* implicit */_Bool) (unsigned short)35511)) ? (8722151695193265708ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4429054316785637335LL)))) ? (((((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0])) % (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((_Bool) var_0)), (((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned char)188))))))), ((+(arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((291696825511655567LL) / (-2890258527145052966LL)))) : (8078539619067139458ULL))))))));
                            arr_14 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((max(((~(((/* implicit */int) var_6)))), (((var_2) / (((/* implicit */int) (unsigned short)32730)))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1585109632777541550LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (2664367244U)))) == (var_1))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) var_8);
                        }
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) min((arr_11 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1] [i_2]), (((/* implicit */long long int) (-(var_2))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) (_Bool)1)), (756238879455611922ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) var_6)) ? (max((17529304295472882414ULL), (var_1))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)49)), (-1732155533)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)79)))))));
}
