/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226738
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(-7193045584521752945LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((19LL) % (6626445701824280196LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_0))) : ((~(var_10)))))) && (((/* implicit */_Bool) (-(7LL))))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28672))) : (var_9))) * (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)61342)) : (((/* implicit */int) (unsigned short)18185))))) : (var_7))))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((-6267086507559028354LL) == (4119093684959702477LL))))) != (min((var_6), (((/* implicit */unsigned int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24564)) ? ((+(14239929250657740490ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17247318073788716402ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4)))))));
                var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1746449508U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5978578443194033769ULL)))))) : (((((/* implicit */_Bool) (short)5588)) ? (((/* implicit */unsigned long long int) var_2)) : (16546169673829928132ULL)))));
            }
            var_15 += ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)10)) >> (((((/* implicit */int) var_5)) + (32167)))))));
            var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        var_17 = ((/* implicit */unsigned int) (!((_Bool)1)));
        var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-17922))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            arr_17 [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 871563458)) & (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9868696781066853008ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (8276831521633712734ULL)))));
            arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10083797740764027166ULL)) ? (5441411874109196038ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_19 [i_5] [i_5] [i_2] = ((/* implicit */signed char) (-(3737159509U)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 6700361313692212460ULL))));
        arr_25 [i_6] [i_6] = ((/* implicit */signed char) (((-(0LL))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (7592975182895796219LL)))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 6761553918033059218ULL)) || (((/* implicit */_Bool) ((var_1) ? (var_2) : (((/* implicit */int) var_1))))))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((11833772435661544263ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23024))))) > (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)22))))))))))))));
}
