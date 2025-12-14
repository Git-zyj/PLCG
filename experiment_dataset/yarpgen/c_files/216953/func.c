/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216953
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
    var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : (((unsigned int) 975005514))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (15068963096057138338ULL))))) : (((/* implicit */int) var_10))));
    var_13 *= ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_8)))))) ? (((((231813045U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (((((/* implicit */_Bool) -3028075912810872578LL)) ? (var_6) : (var_5))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (1073741823))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) (_Bool)1))))) ? (-1068825139) : (var_4)));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4))))))));
                    arr_10 [i_3] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_8)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((max((min((((/* implicit */unsigned int) var_1)), (var_2))), (((/* implicit */unsigned int) ((int) (short)32755))))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                }
                arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) var_5));
                var_18 = ((/* implicit */unsigned long long int) max((max((-1), (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) var_9))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_7))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-1))))));
        var_19 = ((/* implicit */unsigned char) (short)-24615);
    }
}
