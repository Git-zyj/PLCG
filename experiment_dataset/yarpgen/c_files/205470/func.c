/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205470
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)13490)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1799991061U)))) : (((3369667074100441976ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)55)) << (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 549487378432ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -7124842649302482839LL)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)78))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536866816U)) ? ((~(8U))) : ((-(0U)))))) ? (((((_Bool) 904424750)) ? (((/* implicit */long long int) -2106897067)) : (281474976710655LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)24)) | (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)12))))))))))));
                    var_14 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (var_11)))), (1157462994U)))));
                }
            } 
        } 
    } 
}
