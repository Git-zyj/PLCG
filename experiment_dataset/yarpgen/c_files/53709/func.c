/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53709
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1176106673U)) & (11512633624801863159ULL)))) ? (227391897) : (-1240878406)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 227391898)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-227391905)))) : (3118860622U))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_11))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) -156655625))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(arr_2 [i_0]))), (max((((/* implicit */long long int) 3328797951U)), (-2751756105385363501LL)))));
    }
}
