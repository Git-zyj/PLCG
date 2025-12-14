/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227159
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((255ULL), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) < (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)55)))))))));
        var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (+(((/* implicit */int) arr_1 [(_Bool)1] [11]))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) max(((_Bool)1), ((_Bool)1)))))));
            arr_6 [i_2] [(signed char)12] &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((-1762314793), (((/* implicit */int) (unsigned char)56))))) || (((/* implicit */_Bool) ((int) (_Bool)1)))))));
        }
        var_23 += ((/* implicit */signed char) min(((~(((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_1))))));
    }
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) var_13);
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [19])) ? (min((max((255ULL), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-54)) & (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
    }
    var_26 -= max(((signed char)-50), (((/* implicit */signed char) (_Bool)1)));
    var_27 = ((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_4))));
    var_28 = ((/* implicit */unsigned char) min((1899090112U), (((/* implicit */unsigned int) (unsigned char)255))));
}
