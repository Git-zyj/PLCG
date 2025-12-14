/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192503
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) max((max((max((-3169326324157721348LL), (var_15))), (((/* implicit */long long int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_1]))))))), (max((((/* implicit */long long int) max((var_4), ((unsigned short)65510)))), (max((var_12), (8384810410529726333LL)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) min(((unsigned short)65510), ((unsigned short)28)));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((min((min((var_14), ((unsigned short)65511))), (((/* implicit */unsigned short) max((var_8), (var_9)))))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) min((var_3), (((/* implicit */signed char) var_0))))), (min(((unsigned char)13), (var_9))))))));
    var_19 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (short)-14336)), (14416824932341440924ULL))), (max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */signed char) var_0))))), (max((((/* implicit */unsigned long long int) 1239112385U)), (14416824932341440923ULL)))))));
    var_20 -= ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) var_14)), (4324996335585397507ULL))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */signed char) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_17)), ((short)(-32767 - 1))))), (max((14121747738124154109ULL), (((/* implicit */unsigned long long int) var_0))))))));
}
