/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214622
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6343366632752730415LL)) ? (777554491U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3581960700424174935LL)) ? (((/* implicit */int) (short)-6250)) : (((/* implicit */int) (signed char)-98)))))))) ? (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4954530932518183625ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5075))));
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_2 [i_0])), (((long long int) (unsigned char)138)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)88)) / (((/* implicit */int) (unsigned char)230))))) ? (((((/* implicit */int) (signed char)110)) * (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */_Bool) 13492213141191368001ULL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned char)70)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) max(((+(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)61))))))), ((+(721555335)))));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-45))));
            var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_10)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)101)), (-2127597139)))) : (((unsigned int) var_10)))), (((/* implicit */unsigned int) arr_3 [i_1] [(unsigned char)6] [i_0]))));
        }
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_2)) ? (1714502210675417630LL) : (((/* implicit */long long int) var_9)))), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) 17515328838079237878ULL)) && ((_Bool)1))))));
        var_19 = ((/* implicit */long long int) (-(((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))));
        arr_9 [i_2] = ((/* implicit */_Bool) (+(((long long int) var_11))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
        var_21 = ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)7908)))) % (max((-849676764), (((/* implicit */int) var_6))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39775)))))));
        var_22 = ((/* implicit */unsigned short) max((max((arr_11 [i_3]), (arr_11 [i_3]))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_11 [i_3])))));
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)65)))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_0))))));
        arr_13 [i_3] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (1714502210675417624LL))))))) >> (((((((((/* implicit */_Bool) arr_10 [i_3])) ? (18171225873638248252ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((max((arr_11 [i_3]), (((/* implicit */long long int) var_2)))) - (8755140800459838211LL))))) - (15281219481171394538ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (1714502210675417624LL))))))) >> (((((((((((/* implicit */_Bool) arr_10 [i_3])) ? (18171225873638248252ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((((max((arr_11 [i_3]), (((/* implicit */long long int) var_2)))) - (8755140800459838211LL))) + (8755140800459819238LL))))) - (15281219481171394538ULL))) - (7556534229224390677ULL))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_20 [i_5]))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_20 [i_5])))))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned long long int) var_12)))));
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)10]))) - (var_11))))));
        arr_21 [i_4] = ((/* implicit */unsigned int) (+(arr_18 [i_4] [i_4])));
        arr_22 [i_4] [i_4] = ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) var_2)));
        arr_23 [i_4] = (((+(((/* implicit */int) var_3)))) % ((+(((/* implicit */int) var_1)))));
    }
}
