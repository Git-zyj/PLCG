/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49119
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_0] [(unsigned char)19] [(unsigned char)19] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)52))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)54)), (17385256641225476332ULL)))))))));
                    var_18 = ((unsigned char) ((((/* implicit */int) (unsigned char)51)) | (((/* implicit */int) (_Bool)1))));
                }
                var_19 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)194)))) << (((1061487432484075284ULL) - (1061487432484075267ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) 17385256641225476347ULL);
}
