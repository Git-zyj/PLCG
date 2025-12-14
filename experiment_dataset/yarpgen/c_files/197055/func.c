/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197055
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
    var_11 = ((1979169251) / (((/* implicit */int) var_7)));
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) > (var_0)))), ((-(((/* implicit */int) (short)21308)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (short)21290);
                    var_14 = ((/* implicit */unsigned short) ((int) ((unsigned short) arr_5 [i_0] [i_1] [i_2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((max((arr_1 [i_3]), (arr_1 [i_0]))) && (((/* implicit */_Bool) max(((short)-21296), (min((((/* implicit */short) arr_4 [(_Bool)1] [i_0])), ((short)-21281))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_3])) * (((/* implicit */int) arr_3 [i_4])))) * ((+(((/* implicit */int) max(((short)21281), (((/* implicit */short) arr_11 [i_0] [i_3] [i_4])))))))));
                    arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) == (((/* implicit */int) (unsigned char)164))));
                    var_17 -= ((/* implicit */unsigned long long int) min((max((arr_1 [i_3]), (arr_1 [i_0]))), (arr_10 [(_Bool)1] [(unsigned char)12] [(unsigned char)12])));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_11 [i_0] [4ULL] [i_0]))))));
    }
}
