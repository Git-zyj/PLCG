/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51004
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 1] [i_1 + 1] [i_0 - 1] = ((/* implicit */signed char) var_13);
                arr_7 [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)-18))))))) > ((((_Bool)1) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32993)))))));
                arr_8 [i_0] [i_0] [i_0] = arr_3 [i_0] [(signed char)8];
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_0))), (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (min((3444714682562086608ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15002029391147464988ULL)) ? (((/* implicit */long long int) var_11)) : (var_4)))))) : (13888741952150440903ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_9 [i_2 - 1] [i_2 + 2])))) ? (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) 7465423)) : (5179088061537805986ULL))) : (((/* implicit */unsigned long long int) (~(arr_10 [i_2]))))));
        var_16 = ((/* implicit */long long int) ((3444714682562086630ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 15002029391147465002ULL))))), (arr_11 [i_2])))))));
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */long long int) ((arr_15 [i_3]) && (((/* implicit */_Bool) var_9))));
        var_17 = ((/* implicit */int) ((long long int) arr_15 [i_3]));
    }
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8365))) : (15002029391147465007ULL)))) ? (((((/* implicit */_Bool) min((arr_19 [i_4] [i_4]), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [3]))) : (max((((/* implicit */unsigned long long int) var_7)), (15002029391147465007ULL))))) : ((((-(15002029391147465007ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
        var_19 = ((/* implicit */signed char) var_7);
    }
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) 3444714682562086613ULL));
}
