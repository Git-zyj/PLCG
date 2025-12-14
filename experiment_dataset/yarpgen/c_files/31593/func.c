/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31593
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) arr_0 [i_1]);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9967424622725122349ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)16]))) : (9967424622725122349ULL))) / (9967424622725122348ULL)))) ? (9967424622725122345ULL) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65527)) >> (((8479319450984429268ULL) - (8479319450984429238ULL)))))) & (9967424622725122373ULL)))));
            }
        } 
    } 
}
