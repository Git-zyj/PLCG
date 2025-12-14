/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206762
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-66)), (((((/* implicit */_Bool) var_12)) ? (-7029377821967845787LL) : (-7029377821967845808LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-1)), (7029377821967845808LL)))) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (short)6774)))) : (((((/* implicit */int) (short)-6791)) | (((/* implicit */int) min((((/* implicit */short) (signed char)-66)), ((short)-21009))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-6752))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)-30334))))) ? ((+(((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) var_7)));
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), ((short)-1))))))) ? (max((-5503218320766843817LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-67)), (((var_11) / (((/* implicit */int) (unsigned char)124)))))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) -7029377821967845787LL))));
            }
            for (short i_4 = 2; i_4 < 7; i_4 += 1) 
            {
                var_24 = max((((/* implicit */unsigned short) (signed char)-93)), ((unsigned short)26772));
                arr_19 [i_2] [i_2] = ((/* implicit */signed char) max(((~(((((/* implicit */int) var_17)) & (((/* implicit */int) var_18)))))), ((-(max((var_10), (-1242487278)))))));
            }
            arr_20 [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-6517)) : (((/* implicit */int) (unsigned short)26772))))) ? (((((/* implicit */_Bool) (short)8191)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-10498))))) : (7029377821967845807LL)))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38763)) ? (((/* implicit */int) (short)32114)) : (((/* implicit */int) (signed char)-93))))) && (((/* implicit */_Bool) (signed char)-93))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)57)) ^ (((/* implicit */int) (signed char)-66))))), (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)20201))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)17342))))))))))))));
            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)87))))) ? (((((/* implicit */_Bool) -4919291813315227056LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)5637)))) : ((-(((/* implicit */int) (unsigned char)0)))))) << (((((-500265360) + (500265382))) - (3)))));
        }
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((8260312863888844144LL), (((/* implicit */long long int) arr_8 [i_0 - 1] [(short)4] [8LL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (-1790103452) : (((/* implicit */int) (short)5962))))) : (max((((-2791325006711667149LL) / (var_13))), (((/* implicit */long long int) arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) 628906243);
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_0))));
        var_31 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)62)) && (((/* implicit */_Bool) -5877005109796729170LL))))));
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_3))));
    var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-3009))))) | (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((min(((short)6760), (var_1))), (((/* implicit */short) var_15)))))) : (-306974696780937886LL)));
}
