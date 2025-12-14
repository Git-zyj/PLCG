/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193234
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_17))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((-(var_1)))))));
        var_21 *= ((/* implicit */short) (-(min((min((var_4), (((/* implicit */long long int) (unsigned char)75)))), (((/* implicit */long long int) (unsigned short)6))))));
        var_22 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)180))))));
        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) ((short) var_19))) : (((/* implicit */int) (unsigned short)65529)))), (((/* implicit */int) ((unsigned char) (unsigned short)65529)))));
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_24 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) (unsigned char)240))))));
        arr_4 [i_1] [i_1] = ((unsigned short) (((-(((/* implicit */int) (short)-316)))) >> (((((/* implicit */int) ((unsigned short) var_10))) - (14360)))));
        arr_5 [i_1] = ((/* implicit */_Bool) (unsigned char)240);
        arr_6 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) max(((short)-18260), ((short)25143)))))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((short) (short)18260))) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((_Bool) var_6)))));
        arr_10 [(_Bool)1] [(unsigned short)7] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) ((unsigned short) (short)-18260))))));
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)18260))))) ? (((/* implicit */int) min(((short)-18261), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_16)))))));
        arr_15 [i_3] = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_18)))), (((/* implicit */int) ((unsigned short) ((unsigned short) var_8))))));
        var_26 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned short)26517)) && (((/* implicit */_Bool) (unsigned short)65535)))) && (((/* implicit */_Bool) (short)-2181)))), (((((/* implicit */int) (unsigned short)8893)) >= (((/* implicit */int) (unsigned short)3098))))));
        var_27 = ((/* implicit */short) (~(((/* implicit */int) (short)25143))));
    }
    var_28 = ((/* implicit */unsigned short) ((((_Bool) max(((unsigned short)30906), (((/* implicit */unsigned short) (short)-18269))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)202))))))) : ((+((-(var_1)))))));
}
