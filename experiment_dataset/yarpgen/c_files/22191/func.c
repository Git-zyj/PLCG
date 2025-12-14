/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22191
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_5) : ((-(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_5);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) (((((~(-2048))) | ((~(((/* implicit */int) (short)28048)))))) - (((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) max(((short)-28061), (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6078845430170088118ULL)))))))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [(short)17]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))))))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_18 = (((!(((/* implicit */_Bool) -2272526486431145491LL)))) ? (((unsigned long long int) (+(((/* implicit */int) (short)-28068))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) (_Bool)1)), (((/* implicit */short) (!(((/* implicit */_Bool) var_10))))))))));
            arr_7 [(unsigned char)10] [i_0] [0] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0])), (-19)))))), (min(((!(((/* implicit */_Bool) -586256530)))), ((!(((/* implicit */_Bool) arr_4 [7ULL] [i_2] [7ULL]))))))));
        }
        var_19 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (short)-18904)))))) && (((/* implicit */_Bool) min(((unsigned short)3410), ((unsigned short)16481))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_20 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */int) var_7)) : (-1736619732)))))) ? (((((/* implicit */_Bool) (-(6365123470547822384ULL)))) ? (max((((/* implicit */unsigned int) 1736619735)), (arr_5 [i_0] [i_3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) arr_3 [i_0] [i_3])));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)3410), (((/* implicit */unsigned short) (short)32767))))) || (((/* implicit */_Bool) (~(arr_0 [i_3] [i_0])))))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((9107225947385908259LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))))))) ? ((+(((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) var_10))))))) : ((+(((((/* implicit */_Bool) var_14)) ? (14336) : (((/* implicit */int) var_6)))))))))));
            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(min((arr_0 [i_0] [i_3]), (4U)))))), (17741055946515537295ULL)));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((short)-3680), (((/* implicit */short) var_6)))))))) ? (max((((/* implicit */long long int) arr_0 [i_0] [i_3])), (8036393334226632756LL))) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) arr_9 [i_0] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_0]))))));
            var_26 = ((/* implicit */unsigned int) arr_11 [i_0] [(signed char)7] [i_0]);
        }
        arr_12 [i_0] = ((/* implicit */unsigned char) max((941358973U), (((/* implicit */unsigned int) (unsigned char)233))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (min((((/* implicit */int) arr_1 [i_5])), (var_10))) : (((/* implicit */int) arr_1 [i_5]))))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))) : (arr_10 [i_5] [i_5] [i_5])))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (+((~(min((((/* implicit */unsigned int) (unsigned short)4095)), (arr_0 [i_5] [i_5]))))))))));
        var_29 &= min((((/* implicit */short) (unsigned char)127)), ((short)28048));
    }
    for (int i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)17277)))))));
        var_31 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))));
        arr_19 [i_6] [i_6] |= ((/* implicit */unsigned short) (!(((_Bool) (~(310242766U))))));
    }
}
