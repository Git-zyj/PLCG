/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45046
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (short)14547);
        var_20 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 520174637))));
        var_22 = ((/* implicit */int) ((short) (short)14569));
    }
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        var_23 *= ((/* implicit */unsigned char) min(((+(((((/* implicit */long long int) var_9)) / (-9223372036854775782LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1])))))));
        var_24 = ((/* implicit */unsigned char) var_15);
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_25 = ((/* implicit */signed char) (_Bool)1);
            arr_9 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-83)) / (((/* implicit */int) arr_6 [(_Bool)1])))))))) * (((/* implicit */int) arr_5 [i_2 + 1]))));
        }
        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            var_26 = ((/* implicit */_Bool) var_15);
            arr_13 [i_2] [0] [i_4] = ((/* implicit */unsigned char) arr_7 [i_4] [(_Bool)1] [(short)11]);
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)-14551))) && (((/* implicit */_Bool) arr_6 [18])))))));
        arr_14 [i_2] = ((/* implicit */int) max((arr_5 [i_2 + 1]), ((signed char)-9)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_28 = ((short) ((long long int) arr_8 [i_5]));
        var_29 = ((/* implicit */unsigned int) (+(((int) var_15))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */int) (short)14537)) <= (((/* implicit */int) (short)14537))));
    var_31 -= ((/* implicit */int) (~((~(((((/* implicit */unsigned long long int) var_5)) * (13447295074551057025ULL)))))));
    var_32 = (+(var_6));
    var_33 = ((/* implicit */int) (!(var_1)));
}
