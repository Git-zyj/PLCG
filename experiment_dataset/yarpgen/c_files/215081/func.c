/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215081
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)246)), (((unsigned short) 32767U))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (26109992U))) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10748040724110873192ULL)) ? (((/* implicit */int) var_3)) : (var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)79)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned char)2] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(unsigned char)1] [8U] = ((/* implicit */signed char) arr_2 [(unsigned char)4] [4LL] [i_2]);
                    arr_7 [i_0] [i_1] [(short)5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -858214950)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) (signed char)-1))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [0LL] [(_Bool)1])) ? (257408781U) : (((/* implicit */unsigned int) 339929388)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 10748040724110873192ULL))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (4294967267U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) min((arr_3 [i_0] [1U] [i_0]), (((/* implicit */unsigned short) var_0))))) : ((+(var_6))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_5 [1U] [i_0] [i_0]), ((_Bool)1)))), ((~(((/* implicit */int) (unsigned short)56360))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1390977742)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)244)))))))) : (var_7)));
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 6; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 1253082836)) && (((/* implicit */_Bool) (unsigned short)65535))))) - (((int) -7181954245218800977LL))))))));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_3 + 1] [i_4] [i_3 - 4]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_9);
}
