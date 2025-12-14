/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 193;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((193 ? -2766997226080780271 : 2766997226080780271))) ? 193 : (max(15029479091211715066, 40))))) ? ((((((-2766997226080780271 ? 31525197391593472 : 1724456304))) ? 0 : ((-2766997226080780271 ? 2766997226080780270 : 3128842078))))) : ((~((15029479091211715066 ? 3417264982497836549 : -4632949327467078465))))));
        arr_4 [i_0] |= (!158458397);
    }
    var_19 = ((((max(var_10, ((4632949327467078470 ? 4136508923 : 84))))) ? ((max(2472104745, (!33809)))) : (((((136339441844224 ? 7 : 4195417118))) ? ((max(-49, 1166125218))) : ((32039 ? 1822862550 : -2766997226080780290))))));
    var_20 = ((((max(((1886204287 ? 52 : 1073741568)), -954380365))) ? (max(1073741568, 4195417118)) : (!var_7)));
    #pragma endscop
}
