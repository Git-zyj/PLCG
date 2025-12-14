/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50291
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
    var_14 = ((/* implicit */unsigned long long int) var_12);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)129)) << (((((int) max((((/* implicit */int) var_0)), (-491616921)))) - (8197)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((unsigned long long int) var_7)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) min((((((unsigned long long int) -180429693)) + (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_1])), (-226619095)))))), (arr_0 [i_1])));
            var_18 &= ((/* implicit */unsigned char) (_Bool)1);
            var_19 = -226619095;
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) max(((_Bool)0), (((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) < (((/* implicit */int) ((arr_1 [i_2] [i_0]) == (((/* implicit */int) (_Bool)1)))))))));
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
        }
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            var_22 -= ((/* implicit */int) ((unsigned short) (unsigned char)126));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) max((max((-923416781), (-1288969556))), (923416788)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)26212)) <= (((/* implicit */int) (_Bool)1)))))) : (1843133775U))))));
            var_24 = ((/* implicit */_Bool) min((var_24), ((_Bool)1)));
            var_25 = ((_Bool) var_10);
        }
        var_26 = (_Bool)1;
    }
    var_27 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) | (((/* implicit */int) var_12))))) : (((((min((((/* implicit */long long int) var_3)), (var_6))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (60120)))))));
    var_28 = ((/* implicit */int) ((-1LL) + (((/* implicit */long long int) min((var_10), (((/* implicit */int) ((_Bool) var_1))))))));
}
