/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44675
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
    var_10 = (~(((/* implicit */int) (unsigned char)198)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0]), ((+((-2147483647 - 1))))))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_2 [15U] [(unsigned char)20]))));
                    var_11 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((-532729682) <= (-532729682)))))));
                    var_12 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1]))))) >> (((max((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (3998400636061693917ULL))), (((/* implicit */unsigned long long int) -1266579681)))) - (18446744072442971906ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1]))))) >> (((((max((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (3998400636061693917ULL))), (((/* implicit */unsigned long long int) -1266579681)))) - (18446744072442971906ULL))) - (596736523ULL))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (~(var_8)));
    var_14 = (signed char)-25;
    var_15 &= ((/* implicit */short) 532729682);
}
