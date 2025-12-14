/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47884
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [(_Bool)1])) - ((~(((/* implicit */int) (unsigned char)255)))))))));
                var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((61084957U), (((/* implicit */unsigned int) var_0))))) ? (var_5) : (((((/* implicit */_Bool) (short)7703)) ? (((/* implicit */int) (short)17242)) : (arr_3 [i_0] [i_0])))))), (13600781U)));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min(((~(12891739855747802848ULL))), ((+(var_11))))))));
                var_17 = ((/* implicit */signed char) 16266681198969403713ULL);
                var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 4294967282U)) : (1788812717638649511LL)));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) 4281366514U);
    var_20 = min((var_1), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)105))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 4281366514U)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12775))))) << (((((int) var_9)) - (4938)))))))))));
}
