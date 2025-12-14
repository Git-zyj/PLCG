/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33754
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-103)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) (+(3731944049U)))))))) ^ (max((var_0), (((/* implicit */unsigned int) var_5))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) 61572651155456LL)) || (((/* implicit */_Bool) (signed char)3))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) % (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) ((-5787719329700730603LL) != (((/* implicit */long long int) var_0))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_22 = var_1;
        var_23 = ((/* implicit */int) (!(((arr_5 [i_1] [i_1]) <= (((/* implicit */unsigned int) var_3))))));
        var_24 = ((/* implicit */long long int) (-((~(-14586341)))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((arr_8 [i_2] [i_2]) >= (var_12))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_1))))))) % (12100946464489051784ULL));
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) - (18446744073709551608ULL)))) ? (5787719329700730577LL) : (((/* implicit */long long int) ((1182381568U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))))))) >> (((var_7) - (5522834997040863785ULL)))));
    }
    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_17)), ((unsigned short)1)))), (54043195528445952ULL)));
    var_27 = 6156974006654754187LL;
}
